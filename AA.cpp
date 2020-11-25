#include<iostream>
using namespace std;

#define NAME_SIZE 30    // 이름
#define STUDENT_MAX 10  // 최대 학생 수
#define MAJOR_MAX 30    // 전공학과
#define HAKBUN_MAX 10   // 학번
#define SCORE 5        // 성적
#define PHONENUMBER_MAX 15  // 전화번호
#define PROFESSOR 30    // 지도교사
#define CONSULTING 30   // 상담유무


struct _tagStudent
{
    char strName[NAME_SIZE];
    char strMajor[MAJOR_MAX];
    char strPhone[PHONENUMBER_MAX];
    char strProfessor[PROFESSOR];
    char strConsulting[CONSULTING];
    char strHakbun[HAKBUN_MAX];
    int iScore;
};

enum MENU
{
    MENU_NONE,
    MENU_INSERT,
    MENU_SEARCH,
    MENU_EXIT
};


int main()
{

    _tagStudent tStudentArr[STUDENT_MAX] = {};
    char strName[NAME_SIZE] = {};
    int iStudentCount = 0;
    int iStdNumber = 1;

    while (true)
    {
        // 메뉴 출력
        cout << " 1. 학생 등록 : " << endl;
        cout << " 2. 학생 검색 : " << endl;
        cout << " 메뉴를 선택하세요 : ";

        int iMenu;
        cin >> iMenu;

        switch (iMenu)
        {
        case MENU_INSERT:
       
            cout << " ********* 학생 등록 **********" << endl;

            if (iStudentCount == STUDENT_MAX)
                break;

            //학생정보를 등록한다. 이름, 학과, 학번, 성적, 전화번호, 지도교수, 상담유무 

            cout << "이름 :";
            cin >> tStudentArr[iStudentCount].strName;

            cin.ignore(1024, '\n');

            cout << "학과 : ";
            cin.getline(tStudentArr[iStudentCount].strMajor, MAJOR_MAX); //스페이스바까지 문자열로 인식.

            cout << "학번 : ";
            cin.getline(tStudentArr[iStudentCount].strHakbun, HAKBUN_MAX);

            cout << "성적 : ";
            cin >> tStudentArr[iStudentCount].iScore;

            cout << "전화번호 : ";
            cin.getline(tStudentArr[iStudentCount].strPhone, PHONENUMBER_MAX);

            cout << "지도교수 : ";
            cin.getline(tStudentArr[iStudentCount].strProfessor, PROFESSOR);

            cout << "상담유무 : ";
            cin.getline(tStudentArr[iStudentCount].strConsulting, CONSULTING);

            cout << "학생 등록 완료 " << endl;

            break;

        }


        break;
    }

    int iMenu;
    cin >> iMenu;

    switch (iMenu)
    {
    case MENU_SEARCH:


        cout << "********* 학생 검색 **********" << endl;


        cin.ignore(1024, '\n');
        cout << "이름을 검색하세요. : ";
        cin.getline(strName, NAME_SIZE);

        for (int i = 0; i < iStudentCount; ++i)
        {
            if (strcmp(tStudentArr[i].strName, strName) == 0)
            {
                cout << "이름 : " << tStudentArr[i].strName << endl;
                cout << "학과 : " << tStudentArr[i].strMajor << endl;
                cout << "학번 : " << tStudentArr[i].strHakbun << endl;
                cout << "성적 : " << tStudentArr[i].iScore << endl;
                cout << "전화번호 : " << tStudentArr[i].strPhone << endl;
                cout << "지도교사 : " << tStudentArr[i].strProfessor << endl;
                cout << "상담유무 : " << tStudentArr[i].strConsulting << endl;
                break;
            }
        }
        break;




    }
}





