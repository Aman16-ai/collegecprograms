#include<stdio.h>
#include<stdlib.h>
int mat1[20][20],mat2[20][20],resultmat[20][20];
int row,col,row2,col2;
int menu() {
  int choice;
  printf("\nPress 1.Addition of matrices");
  printf("\nPress 2.Subtraction of matrices");
  printf("\nPress 3.Upper and lower triangle of matrix");
  printf("\nPress 4.Multpication of matrices");
  printf("\nPress 5.Transpose of matrix");
  printf("\nPress 6.Exit");
  printf("\n\nEnter your choice");
  scanf("%d",&choice);
  system("clear");
  return choice;
}
int takeInputSingleMatrix() {
  printf("\nEnter the row and column of matrix");
  scanf("%d%d",&row,&col);
  printf("\n\nEnter the values of matrix");
  for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      scanf("%d",&mat1[i][j]);
    }
}
}
int takematinputforAdditionAndSub() {
  int input_flag = 0;
  printf("\nEnter the row and column of matrix 1");
  scanf("%d%d",&row,&col);
  printf("\nEnter the row and column of matrix 2");
  scanf("%d%d",&row2,&col2);
  if(row == row2 && col == col2) {
    input_flag = 1;
     printf("\n\nEnter the values of 1st matrix");
  for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      scanf("%d",&mat1[i][j]);
    }
  }
  printf("\n\nEnter the values of 2nd matrix");
  for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      scanf("%d",&mat2[i][j]);
    }
  }
    return input_flag;
  }
  else {
    return input_flag;
  }
}
void displaySingleMatrix() {
  printf("\n\nvalues of matrix\n");
  for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      printf(" %d ",mat1[i][j]);
    }
    printf("\n");
  }
}
void displayMatrixvalues() {
  printf("\n\nvalues of mat1\n");
  for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      printf(" %d ",mat1[i][j]);
    }
    printf("\n");
  }
  printf("\n\nvalues of mat2\n");
  for(int i = 0;i<row2;i++) {
    for(int j = 0;j<col2;j++) {
      printf(" %d ",mat2[i][j]);
    }
    printf("\n");
  }
}
void addMatrices() {
  int flag = takematinputforAdditionAndSub();
  system("clear");
  if(flag == 1) {
    displayMatrixvalues();
  for(int i =0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      resultmat[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  printf("\n\nAddition of mat1 and mat2 is \n");
  for(int i =0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      printf(" %d ",resultmat[i][j]);
    }
    printf("\n");
  }
  }
  else {
    printf("\n\nRow and column must be same for addition\n\n");
  }
}
void subtractMatrices() {
  int flag = takematinputforAdditionAndSub();
  system("clear");
  if(flag == 1) {
    displayMatrixvalues();
  for(int i =0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      resultmat[i][j] = mat1[i][j] - mat2[i][j];
    }
  }
  printf("\n\nSubtraction of mat1 and mat2 is \n");
  for(int i =0;i<row;i++) {
    for(int j = 0;j<col;j++) {
      printf(" %d ",resultmat[i][j]);
    }
    printf("\n");
  }
  }
  else {
    printf("\n\nRow and column must be same for subtraction\n\n");
  }
}
void upperAndLower() {
  takeInputSingleMatrix();
  system("clear");
  displaySingleMatrix();
  int uppermat[row][col],lowermat[row][col];
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      if(i >= j) {
        uppermat[i][j] = mat1[i][j];
      }
      else {
        uppermat[i][j] = 0;
      }
    }
  }
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      if(i <= j) {
        lowermat[i][j] = mat1[i][j];
      }
      else {
        lowermat[i][j] = 0;
      }
    }
  }
  printf("\nThe upper triangle of matrix is \n");
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      printf(" %d ",uppermat[i][j]);
    }
    printf("\n");
  }

  printf("\nThe lower triangle of matrix is \n");
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      printf(" %d ",lowermat[i][j]);
    }
    printf("\n");
  }

}
void transpose() {
  takeInputSingleMatrix();
  system("clear");
  displaySingleMatrix();
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      resultmat[j][i] = mat1[i][j];
    }
  }
  printf("\n\nThe transpose of matrix is \n");
  for(int i =0;i<row;i++) {
    for(int j =0;j<col;j++) {
      printf(" %d ",resultmat[i][j]);
    }
    printf("\n");
  }
}
int main() {
  while(1) {
    switch(menu()) {
      case 1:
      addMatrices();
      break;
      case 2:
      subtractMatrices();
      break;
      case 3:
      upperAndLower();
      break;
      case 5:
      transpose();
      break;
      case 6:
      exit(0);
      default:
      printf("\n\nPlease enter valid choice");
    }
  }
  return 0;
}