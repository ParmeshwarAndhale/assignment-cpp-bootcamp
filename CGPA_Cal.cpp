// C++ program to calculate the CGPA
// and CGPA percentage of a student
#include<bits/stdc++.h>
using namespace std;

double CgpaCal(double marks[], int n)
{
	double grade[n];
	double cgpa, sum = 0;

	for(int i = 0; i < n; i++)
	{
	grade[i] = (marks[i] / 10);
	}

	for(int i = 0; i < n; i++)
	{
	sum += grade[i];
	}
	cgpa = sum / n;

	return cgpa;
}
int main()
{
	int n;
    cout<<"How Many Subject!!"<<endl;
    cin>>n;
	double marks[n];
    cout<<"Enter Marks!!"<<endl;
    
    for(int i=0;i<n;i++)
    {
        try{
        cin>>marks[i];
        if(marks[i]>100)
        throw "Invalid Marks!!";
        }
        catch(const char *msg)
        {
            cout<<msg<<endl;
            exit(0);
        }

    }
	double cgpa = CgpaCal(marks, n);	
	cout << "CGPA = ";
	printf("%.1f\n", cgpa);
	cout << "CGPA Percentage = ";
	printf("%.2f", cgpa * 9.5);
}
