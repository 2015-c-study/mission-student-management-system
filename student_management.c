#include <stdio.h>
#include <stdlib.h>

#define EXIT 0
#define REGISTER_STUDENT 1
#define INPUT_SCORE 2

typedef struct score {
  char subject[20];
  int grade;
} Score;

/* 학생 정보 */
typedef struct student {
  int student_id;
  char name[20];
  int status;
  Score* scores;
} Student;

void exit_program();
void print_menu();
/**
 * 학생을 등록해주는 함수
 * 기본 정보를 입력 받아서 students에 저장
 *
 * Return 에러 발생시 -1 아닐 경우 0
 */
int register_student(Student** students, int index);
/**
 * ID를 입력받아 해당 학생의 성적을 입력 받아서 저장해주는 함수
 *
 * Return 에러 발생시 -1 아닐 경우 0
 */
int input_score(Student** students);
/**
 * 학생의 휴학/복학 상태를 변경하는 함수
 *
 * Return 에러 발생시 -1 아닐 경우 0
 */
int change_status(Student** students);
/**
 * 학생을 검색해서 결과를 보여주는 함수
 * 학번, 이름, 성적, 재학 상태로 검색한 학생들의 정보를 출력
 */
void search_student(Student** students);
Student* search_by_id(Student** students, int student_id);
Student** search_by_name(Student** students, char* name);
Student** search_by_score(Student** students, Score* score);
Student** search_by_status(Student** students, int status);
/**
 * 등록된 학생을 제거하는 함수
 *
 * Return 에러 발생시 -1 아닐 경우 0
 */
int remove_student(Student** students);

int main(void) {
  // `학생 정보`를 250개까지 저장할 수 있는 배열/링크드 리스트
  int select;
  int index = 0;
  Student* students[250];

  while (1) {
    print_menu();
    printf(">> ");
    scanf("%d", &select);
    
    switch (select) {
    case EXIT:
      exit_program();
    case REGISTER_STUDENT:
      if (register_student(students, index) != -1) {
	index++;
      }
      break;
    case INPUT_SCORE:
      input_score(students);
      break;
    // other cases
    default:
      // error
      // ...
      printf("not implemented.\n");
    }
  }

  return 0;
}

void exit_program() {
  printf("프로그램을 종료합니다.\n");
  exit(0);
}

void print_menu() {
  printf("학생 관리 프로그램\n");
  printf("======================\n");
  printf("1. 학생 등록\n");
  printf("2. 학생 성적 입력\n");
  printf("3. 학생 휴학/복학 신청\n");
  printf("4. 학생 검색\n");
  printf("5. 학생 제거\n");
  printf("0. 종료\n");
  printf("======================\n");
}

int register_student(Student** students, int int) {
  printf("\nregister student\n\n");
  
  return 0;
}

int input_score(Student** students) {
  printf("\ninput score\n\n");

  return 0;
}

