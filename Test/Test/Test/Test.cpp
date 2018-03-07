// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;  

//struct ListNode 
//{
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//{
//	//定义头结点
//	ListNode *head;
//	while()
//	{
//		
//	}
//	return pNode;
//}

int lengthOfLongestSubstring(string s) 
{
	int nResult = -1;
	if (!s.empty())
	{

	}
	return nResult;
}

//28
int strStr(string haystack, string needle)
{
	if ((haystack.empty() && !needle.empty()) || (needle.empty() && !haystack.empty()))
	{
		return -1;
	}
	else if (haystack.empty() && needle.empty())
	{
		return 0;
	}

	if (haystack.length() < needle.length())
	{
		return -1;
	}
	else if (haystack.length() == needle.length())
	{
		if (haystack.compare(needle) != 0)
		{
			return -1;
		}
		return 0;
	}
	else
	{
		int nLength = haystack.length();
		for (int i=0; i<nLength; i++)
		{
			int nPos = haystack.find(needle[0]);
			if (nPos < 0)
			{
				return -1;
			}
			//ispsiss1ippi
			haystack = haystack.substr(nPos, nLength-nPos);
			string strHar = haystack;
			if (haystack.substr(0, needle.length()).compare(needle) == 0)
			{
				return nLength-haystack.length();
			}
			haystack = strHar.substr(1, strHar.length()-1);
		}
		return -1;
	}
	return -1;
}

//58
int lengthOfLastWord(string s)
{
	if (s.empty())
	{
		return 0;
	}
	int nPos = s.find_last_of(' ');
	while (nPos == s.length() - 1)
	{
		s = s.substr(0, nPos);
		if (s.empty())
		{
			return 0;
		}
		nPos = s.find_last_of(' ');
	}
	if (nPos < 0)
	{
		return s.length();
	}
	return s.length() - nPos - 1;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int nPos = lengthOfLastWord(" ");
	return 0;
}

