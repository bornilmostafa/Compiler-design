#include<iostream>
#include<fstream>

using namespace std;


int num;
    int num2;
    string Name;


    fstream st; // Creating object of fstream class
    string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
    st.open("E:\\texts.txt",ios::out);  // Creating new file
    if(!st) // Checking whether file exist
    {
        cout<<"File creation failed";
    }

else
{
		int ch=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter course ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];

			}
	    	}
	    	else
	    	{

	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter course ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];
			}
			total=ch+total;
			}

}
void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    	    }
	    	}
}
void search()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	string rollno;
				cout<<"Enter the roll no of student"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll no "<<arr2[i]<<endl;
	    		        cout<<"Course "<<arr3[i]<<endl;
	    		        cout<<"Class "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
					}
				}
			}
}
void update()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
				cout<<"Enter the roll no of student which you want to update"<<endl;
				cin>>rollno;
					for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						cout<<"\nPrevious data"<<endl<<endl;
						cout<<"Data of Student "<<i+1<<endl;
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll no "<<arr2[i]<<endl;
