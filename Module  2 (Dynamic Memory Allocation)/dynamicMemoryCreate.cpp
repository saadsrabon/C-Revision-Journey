#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;          // একটি ইন্টিজার ভেরিয়েবল ডিক্লেয়ার করে তাতে ১০ রেখে দেওয়া হচ্ছে। 
    cout << x << endl;   // ভেরিয়েবলটি প্রিন্ট করা হচ্ছে।
    // data_type * pointer_name  = new data_type

    int *ptr = new int; // একটি পইন্টার ডিক্লেয়ার করে তাতে ইন্টিজার রেখে দেওয়া হচ্ছে।
    *ptr = 20;          // পইন্টারের ভেরিয়েবলের মান পরিবর্তন করা হচ্ছে।

    cout <<*ptr << endl; // পইন্টারের ভেরিয়েবলের মান প্রিন্ট করা হচ্ছে।

}

// Dynamic Memory Allocation er jnno amak ekta pointer nite hoy ,ebong shei pointer ke derefference korte hobe.and then oikhane data pawa jabeffsdg