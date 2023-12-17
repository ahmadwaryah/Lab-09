#include<iostream>
using namespace std;

//Task 01:
int main(){
	int arr[3][3];
	int x=0;
	int y=0;
	cout<<"Elements of the 2nd array? ";
	for(int k=0;k<3;k++){
		for(int j=0;j<3;j++){
			cin>>arr[k][j];
		}
	}
	for(int k=0;k<3;k++){
		x+=arr[k][k];
		}
	for(int k=0;k<3;k++){
		y+=arr[k][2-k];
	}
	cout<<"Left sum: "<<x<<endl<<"Right diagonal: "<<y;
}

//Task 02:
void amat(int x[3][3] , int y[3][3],int result[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			 result[i][j]=x[i][j]+y[i][j];
	}
}
	
}
int main(){
	int result[3][3];
	int x[3][3];
	int y[3][3];
	cout<<"Array 1 Elements";
	
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>x[i][j];
	}
	}
	cout<<"Array 2 Elements";
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>y[i][j];
	}
	}
	amat(x,y,result);
	cout<<"sum= "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<< result[i][j]<<" ";
	}
	cout<<endl;
}
	return 0;
}

//Task 03:
void transpose(int mat[3][3])

{
	
	for(int i=0;i<3;i++){
		for (int j=i+1;j<3;j++){
	int temp= mat[i][j];
	mat[i][j]=mat[j][i];
	mat[j][i]=temp;
		}
	}
}
int main(){
	int mat[3][3];
	cout<<"Elements of the array"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat[i][j];
			
	}
}cout<<endl;
	cout<<"Transpose: "<<endl;
	transpose(mat);
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
			cout<<mat[i][j]<<" ";
	
	}cout<<endl;
}
}void multiplication(int matrix1[3][3],int matrix2[3][3],int result[3][3]){
        for(int i=0;i<3;i++){
        	for(int j=0;j<3;j++){
        		result[i][j]=0;
        		for(int k=0;k<3;k++){
        	result[i][j]+=matrix1[i][k]*matrix2[k][j];		
				}
			}
		}   
}
//Task 04
void multiplication(int x[3][3],int y[3][3],int result[3][3]){
        for(int i=0;i<3;i++){
        	for(int j=0;j<3;j++){
        		result[i][j]=0;
        		for(int k=0;k<3;k++){
        	result[i][j]+=x[i][k]*y[k][j];		
				}
			}
		}   
}

int main(){
	int x[3][3],y[3][3],result[3][3]; 
	cout<<"Elements of the array 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>> x[i][j];
		}
	}cout<<"Elements of 2nd array"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>> y[i][j];
		}
	}
	cout<<"Result"<<endl;
	multiplication(x,y,result);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<< result[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}


//Task 05:
void pmTable(int x, int m) {
    if (m > 10) {
        return;
    }
    cout << x<< " * " << m << " = " << x * m << std::endl;
    pmTable(x, m + 1);
}
int main() {
    int y = 15;
    cout << "Multiplication table of " << y << ":" << std::endl;
    pmTable(y, 1);
   return 0;
}

//HOME TASKS:
float determinant (float x[3][3]) {
    return x[0][0] * (x[1][1] * x[2][2] - x[1][2] * x[2][1]) -
           x[0][1] * (x[1][0] * x[2][2] - x[1][2] * x[2][0]) +
           x[0][2] * (x[1][0] * x[2][1] - x[1][1] * x[2][0]);
}

void adjoint(float x[3][3], float adj[3][3]) {
    adj[0][0] = x[1][1] * x[2][2] - x[1][2] * x[2][1];
    adj[0][1] = x[0][2] * x[2][1] - x[0][1] * x[2][2];
    adj[0][2] = x[0][1] * x[1][2] - x[0][2] * x[1][1];

    adj[1][0] = x[1][2] * x[2][0] - x[1][0] * x[2][2];
    adj[1][1] = x[0][0] * x[2][2] - x[0][2] * x[2][0];
    adj[1][2] = x[0][2] * x[1][0] - x[0][0] * x[1][2];

    adj[2][0] = x[1][0] * x[2][1] - x[1][1] * x[2][0];
    adj[2][1] = x[0][1] * x[2][0] - x[0][0] * x[2][1];
    adj[2][2] = x[0][0] * x[1][1] - x[0][1] * x[1][0];
}

void inverse(float x[3][3]) {
    float determinant = det(x);

    if (determinant == 0) {
        cout << "The matrix is singular, and its inverse does not exist." << std::endl;
        return;
    }

    float adj[3][3];
    adjoint(x, adj);

    cout << "Inverse of the matrix:" << std::endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << adj[i][j] / determinant << " ";
        }
        cout << std::endl;
    }
}

int main() {
    float mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    inverse(mat);

    return 0;
}
