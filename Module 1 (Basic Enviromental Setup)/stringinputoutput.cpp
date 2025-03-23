#include <iostream>

#include <string.h>

#include <string>

using namespace std;

 

int main()

{

 char s[100]; // ১০০ সাইজের একটি character array ডিক্লেয়ার করা হয়েছে, যা একটি স্ট্রিং হিসেবে ব্যবহৃত হবে।

 int a; // একটি integer ভেরিয়েবল ডিক্লেয়ার করা হয়েছে।

 

 cin >> a; // integer ইনপুট নেওয়া হচ্ছে।

 getchar(); // একটি newline character (এন্টার কী) গ্রহণ করা হচ্ছে যাতে পরবর্তী ইনপুটে সমস্যা না হয়।

 

 cin.getline(s, 100); // স্ট্রিং ইনপুট নেওয়ার জন্য cin.getline ব্যবহার করা হচ্ছে, যা স্ট্রিং s তে সংরক্ষণ করা হবে।

 

 cout << a << endl; // integer a এর মান আউটপুট করা হচ্ছে।

 cout << s << endl; // স্ট্রিং s এর মান আউটপুট করা হচ্ছে।

 

 return 0; // প্রোগ্রাম শেষ।

}
