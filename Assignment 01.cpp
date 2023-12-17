#include<iostream>
using namespace std;

//Question 1

int main(){
	int k;
	cout<<"value: ";
	cin>> k;
	if(k>10&&k<=20)
    {
		cout<<"1";
	}
    else{
		cout<<"0";
	}
}


//Question 2:
int main()
{
 	int x;
 	cout<<"Number: ";
 	cin>> x;
    for(int i=1;i<=x;i++)
    {
    	if(x%i==0)
        {
    		cout<<i<<" ";
		}
	}
 } 
 
 //Question 3:
 int main() {
    int x;
    cout << "Enter a positive integer N: ";
    cin >> x;
    int y = 0;
    int c=x - 1;
    while (c > 1) {
        bool isPrime = true;
     for(int i= 2;i *i<=c;++i) {
            if (c % i == 0) {
                isPrime = false;
                break;
            }
        }
     if (isPrime) {
            y=c;
            break;
        }
      --c;
    }
    if(y != 0) {
        cout << "The largest prime number less than or equal to " << x<< " is: " << y << endl;
    }else {
        cout << "There is no prime number less than or equal to " << x << endl;
    }
    return 0;
}

//Question 4:
int main() {
    int q, w;
    cin >> q >> w;
   int r=0,r=0;
   while(q>=w) {
        q -= w;
        r++;
    }
    remainder=q;
   cout<<r<< endl;
    cout << remainder << endl;

    return 0;
}

//Question 5:
int main() {
    int arr[8] = {1, 2, 3, 4, 5}; 
    for (int k = 5; k < 8; ++k) {
        cout<<"Elements : "<<k+1;
        cin >> arr[k];
    }
    cout << "Elements of the array:" << endl;
    for (int k = 0; k < 8; ++k) {
        cout<<arr[k] << " ";
    }
    return 0;
}

//Question 6:
int main()
{
	int arr[5];
	int n = 0;
	bool f= false;
	cout << "Enter a number";
	cin >> n;
	cout << endl;
	cout << "Enter the numbers of the array";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++)
	{for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (arr[i] + arr[j] + arr[k] == n )
				{
					f = true;
				}
			}
		}
	}
	if (!f)
	{
		cout << "Triplet not found" << endl;
	}
	else
	{
		cout << "Triplet found";
	}
	return 0;
}


//Question 7:
int main() {
    int arr[6] = {4, 2, 7, 1, 5, 3};

    cout << "Array: ";
    for (int b = 0; b < 6; b++) {
        cout << arr[b] << " ";
    }
    cout << endl;
   for (int b = 0; b < 5; b++) {
        for (int d = 0; d < 5 - b; d++) {
            if (arr[d] > arr[d + 1]) {
                int temp = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = temp;
            }
        }
    }
    cout << "Sort Aary:  ";
    for (int d = 0; d < 6; d++) {
        cout << arr[b] << " ";
    }
    cout << endl;
    return 0;
    

 
