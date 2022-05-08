#include<stdio.h>
union test1
{
    int x;
    int y;
};

union test2
{
    int x;
    char ch;
};

union test3
{
    char ch[20];
    double x;
};

struct test4
{
    int x;
    int y;
    double z;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("SIZE OF T1:%d\n",sizeof(t1));
    printf("SIZE OF T2:%d\n",sizeof(t2));
    printf("SIZE OF T3:%d\n",sizeof(t3));
    printf("SIZE OF T4:%d\n",sizeof(t4));

    getch ();
}

/*

test3 ক্ষেত্রে Expected output আসার কথা ছিল 20 কিন্তু  Actual output এসেছে   24
এর কারন হচ্ছে  test3  এর জন্য মেম্বার ছিল স্ট্রিং এবং  double.
Memory Allocation এর ক্ষেত্রে Dynamic ভাবে মেমোরি সাইজ  allocate হয় |
 তাই এ ক্ষেত্রে  একটা একটা করে বিট  allocate করা যায় না |
 তাই এই টেস্ট  এ  double থাকার কারনে output 8 এর গুনিতক আকারে এসেছে |
 মেমোরি এর মধ্যে ২৪ ব্লক এর মধ্যে 20 টা ব্লক data দিয়ে allocate করা থাকবে আর বাকি 4  টা ব্লক empty  থাকবে |

আবার  দেখা যাচ্ছে ,  test4 এর ক্ষেত্রে  Expected আউটপুট আসার কথা ছিল 9    কিন্তু Actual আউটপুট এসেছে 12 |
এই  test4  এর মেম্বার এর ডাটা টাইপ ছিল  int , int , char |
তাই এখানে 4 এর গুনিতক আকারে মেমোরি allocate হয়েছে |
Expected Output 9  আসার কথা থাকলে ও Dynamic Memory Allocation এর জন্য   Compiler থেকে প্রাপ্ত  output হবে 12


*/
