# *C++ string class and its applications*
In C++ we can store string by one of the two ways –

C style strings
string class (discussed in this post)
In this post, the second method is discussed. string class is part of C++ library that supports a lot much functionality over C style strings.
C++ string class internally uses char array to store character but all memory management, allocation, and null termination is handled by string class itself that is why it is easy to use. The length of the C++ string can be changed at runtime because of dynamic allocation of memory similar to vectors. As string class is a container class, we can iterate over all its characters using an iterator similar to other containers like vector, set and maps, but generally, we use a simple for loop for iterating over the characters and index them using the [] operator.
C++ string class has a lot of functions to handle string easily. Most useful of them are demonstrated in below code.

// C++ program to demonstrate Character Array

// and String

#include<iostream>

#include<string>// for string class

using namespace std;

int main()

{

	// Size has to be predefined in character array

	char str[80] = "Manishkumar";



	// Size not predefined in string

	string s("Manishkumar");



	// Printing character array and string

	cout << str << endl;

	cout << s << endl;



	return 0;

}

Outputs:-PS C:\Users\manish kumar\Documents> cd "c:\Users\manish kumar\Documents\" ; if ($?) { g++ 1st.cpp -o 1st } ; if ($?) { .\1st }
Manishkumar
Manishkumar
PS C:\Users\manish kumar\Documents>
2.2. Strings
We have all used text processing programs such as Microsoft Word, Word Perfect, or PageMaker to prepare documents, search existing documents for prespecified words or phrases. However, we often fail to recognize that this type of effort involves the use of a very specific type of data structure, called a string. In this section, we examine the definition of a string, as well as operations over strings and their complexity.

Definition. A string is a sequence of characters taken from an alphabet A.

Example. Given the alphabet A = {a,b,d,y}, one can construct the string a bad baby.

Example. Given the modern English alphabet A = {a,b,...,z,A,B,...Z}, one can view this sentence as a string (inclusive of punctuation such as period, space, and comma, as well as delimiters such as parentheses, braces, and brackets).

Operations on Strings. Strings can be manipulated by operations such as concatenation, length, substring and pattern recognition. We discuss each of these operations as follows.

Definition. Given two strings s and t, the concatenation operation, written as s || t or s + t, appends t to s, such that the last character of s is followed by the first character of t and the remainder of t.

Example. Given s = "hello" and t = "dave" s + t = "hellodave".

Algorithm. Given two strings s and t of length M and N, respectively, the concatenation operation s + t can be expressed in pseudocode, as follows:

     concatenate(s,t : string):
     { for i = 1 to M do           # M iterations
         output(s[i])              # 1 I/O per iteration
       for i = 1 to N do           # N iterations
         output(t[i])              # 1 I/O per iteration
     }
Analysis. The preceding algorithm requires O(M + N) I/O operations, due to the two non-nested loops.

Definition. Given a string s, the length operation returns the number of characters in s.

Example. Given s = "hello", length(s) = 5.

Example. Given s = "hello world", length(s) = 11, since leading blank symbols and internal blank symbols are included in the length calculation.

Algorithm. Given a string s, and assuming that s terminates with a null character, the length of s can be computed as follows:

     length(s : string):
     { L = 0
       repeat until s[i] = null
         L = L + 1
       return(L)
     }
Analysis. The preceding algorithm requires N incrementations to compute the length of an N-character string.

Definition. Given a string s of length N, a substring of s is a contiguous partition of s that has length less than or equal to N.
Example. Given s = "friday", the substring s[3:4] = "id", and the substring s[4:6] = "day", as shown below.


Figure 2.2.1. Example of substring extraction.

Algorithm. Given a string s, the [i:j]-th substring of s can be computed as follows:

     substring(s : string, i,j: integer):
     { for k = i to j do
         output(s[k])
     }
Analysis. The preceding algorithm requires O(j - i) I/O operations to compute the [i:j]-th substring. If i > N or j > N or i < 1 or j < 1, then the substring is undefined.

Definition. Given a string s of length N, and a test pattern t of length M  N, if t is a contiguous partition of s, then t is said to be found in s.

Example. Given s = "friday", the pattern "id" is the [3:4]-th substring of s, and is thus found in s.

Algorithm. Given a string s of length N, and a test pattern t of length M  N, the process of locating t in s can be computed many different ways. Here is one such expression in pseudocode, which is also called template matching or brute-force pattern matching:

     find(s,t : string)
     { M = length(t)
       for i = 1 to (length(s) - M + 1)
       { j = i+M-1]
	 if s[i:j] = t[1:M] then return(i) }
       return(-1)
     }
Analysis. The preceding algorithm requires O(N2) comparisons to implement brute-force pattern matching. Since t = s is possible, we say that length(t) = O(length(s)) = O(N). Since there are N - M + 1 iterations of the loop in the preceding algorithm, this implies O(N2) comparisons.

2.3. String Representations of Data Structures
It is sometimes useful to print out a data structure in ASCII form, for portability of structural and value-specific information. There are many different representations of data structures that can be used for this purpose. Here follow a few such string representations.

List -- Given a list L = (a,c,1,3,b,4,e,r,2,6), one can represent L using the following string:

[LIST L [a c 1 3 b 4 e r 2 6]]
Here, the datatype string LIST tells us what type of data structure is encoded, L denotes the name of the list, and the elements are space-delimited within enclosing brackets.

Vector, Set -- A vector (1-D array) or set can be represented in the same manner as a list, using the type identifier VECTOR or SET instead of LIST.

Matrix -- A matrix is a 2-D array. For example, a 2x3-element matrix A, given by

    [  1 2 3  ]
    [  4 5 6  ]
can be represented in terms of the string

[MATRIX A [2 3] [1 2 3 4 5 6]] ,
where the two numbers following the name A denote the number of rows and columns in A, and the values of A are listed in row-major scanning order. The other common type of scanning order, called column-major, would list the values of A as 1 4 2 5 3 6.

Multidimensional Array -- A multidimensional array would be encoded similarly to a 2-D array or matrix. The sizes of each array dimension would be listed after the array name, and the elements would be listed in some predetermined scanning order (customarily row-major).

As we introduce other data structures and their operations, we will include the string representation of each salient data structure.






2.2. Strings
We have all used text processing programs such as Microsoft Word, Word Perfect, or PageMaker to prepare documents, search existing documents for prespecified words or phrases. However, we often fail to recognize that this type of effort involves the use of a very specific type of data structure, called a string. In this section, we examine the definition of a string, as well as operations over strings and their complexity.

Definition. A string is a sequence of characters taken from an alphabet A.

Example. Given the alphabet A = {a,b,d,y}, one can construct the string a bad baby.

Example. Given the modern English alphabet A = {a,b,...,z,A,B,...Z}, one can view this sentence as a string (inclusive of punctuation such as period, space, and comma, as well as delimiters such as parentheses, braces, and brackets).

Operations on Strings. Strings can be manipulated by operations such as concatenation, length, substring and pattern recognition. We discuss each of these operations as follows.

Definition. Given two strings s and t, the concatenation operation, written as s || t or s + t, appends t to s, such that the last character of s is followed by the first character of t and the remainder of t.

Example. Given s = "hello" and t = "dave" s + t = "hellodave".

Algorithm. Given two strings s and t of length M and N, respectively, the concatenation operation s + t can be expressed in pseudocode, as follows:

     concatenate(s,t : string):
     { for i = 1 to M do           # M iterations
         output(s[i])              # 1 I/O per iteration
       for i = 1 to N do           # N iterations
         output(t[i])              # 1 I/O per iteration
     }
Analysis. The preceding algorithm requires O(M + N) I/O operations, due to the two non-nested loops.

Definition. Given a string s, the length operation returns the number of characters in s.

Example. Given s = "hello", length(s) = 5.

Example. Given s = "hello world", length(s) = 11, since leading blank symbols and internal blank symbols are included in the length calculation.

Algorithm. Given a string s, and assuming that s terminates with a null character, the length of s can be computed as follows:

     length(s : string):
     { L = 0
       repeat until s[i] = null
         L = L + 1
       return(L)
     }
Analysis. The preceding algorithm requires N incrementations to compute the length of an N-character string.

Definition. Given a string s of length N, a substring of s is a contiguous partition of s that has length less than or equal to N.
Example. Given s = "friday", the substring s[3:4] = "id", and the substring s[4:6] = "day", as shown below.


Figure 2.2.1. Example of substring extraction.

Algorithm. Given a string s, the [i:j]-th substring of s can be computed as follows:

     substring(s : string, i,j: integer):
     { for k = i to j do
         output(s[k])
     }
Analysis. The preceding algorithm requires O(j - i) I/O operations to compute the [i:j]-th substring. If i > N or j > N or i < 1 or j < 1, then the substring is undefined.

Definition. Given a string s of length N, and a test pattern t of length M  N, if t is a contiguous partition of s, then t is said to be found in s.

Example. Given s = "friday", the pattern "id" is the [3:4]-th substring of s, and is thus found in s.

Algorithm. Given a string s of length N, and a test pattern t of length M  N, the process of locating t in s can be computed many different ways. Here is one such expression in pseudocode, which is also called template matching or brute-force pattern matching:

     find(s,t : string)
     { M = length(t)
       for i = 1 to (length(s) - M + 1)
       { j = i+M-1]
	 if s[i:j] = t[1:M] then return(i) }
       return(-1)
     }
Analysis. The preceding algorithm requires O(N2) comparisons to implement brute-force pattern matching. Since t = s is possible, we say that length(t) = O(length(s)) = O(N). Since there are N - M + 1 iterations of the loop in the preceding algorithm, this implies O(N2) comparisons.

2.3. String Representations of Data Structures
It is sometimes useful to print out a data structure in ASCII form, for portability of structural and value-specific information. There are many different representations of data structures that can be used for this purpose. Here follow a few such string representations.

List -- Given a list L = (a,c,1,3,b,4,e,r,2,6), one can represent L using the following string:

[LIST L [a c 1 3 b 4 e r 2 6]]
Here, the datatype string LIST tells us what type of data structure is encoded, L denotes the name of the list, and the elements are space-delimited within enclosing brackets.

Vector, Set -- A vector (1-D array) or set can be represented in the same manner as a list, using the type identifier VECTOR or SET instead of LIST.

Matrix -- A matrix is a 2-D array. For example, a 2x3-element matrix A, given by

    [  1 2 3  ]
    [  4 5 6  ]
can be represented in terms of the string

[MATRIX A [2 3] [1 2 3 4 5 6]] ,
where the two numbers following the name A denote the number of rows and columns in A, and the values of A are listed in row-major scanning order. The other common type of scanning order, called column-major, would list the values of A as 1 4 2 5 3 6.

Multidimensional Array -- A multidimensional array would be encoded similarly to a 2-D array or matrix. The sizes of each array dimension would be listed after the array name, and the elements would be listed in some predetermined scanning order (customarily row-major).

As we introduce other data structures and their operations, we will include the string representation of each salient data structure.


