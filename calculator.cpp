#include <stdio.h>

int main() {

  char op;
  double f, s;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &f, &s);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", f,s,f+s);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", f,s,f-s);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", f,s,f*s);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", f,s,f /s);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

