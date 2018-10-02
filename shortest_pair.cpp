#include<bits/stdc++.h>
using namespace std;
int mat[50][50],TrackNode[50],dist[50],x[50];
int Initial,End,i,j,node;
void Input();
void initialize();
int getMin();
void find_route();
void Output();
void print(int, int);

void initialize()
{
	memset(x,0,sizeof(x));
	memset(TrackNode,-1,sizeof(TrackNode));
	//memset(dist,INT_MAX,sizeof(dist));
	for(i=0;i<node;i++)
		dist[i]=INT_MAX;
	dist[Initial]=0;
}
void Input()
{
	initialize();
	cout<<TrackNode[10]<<" "<<dist[10];
	cout<<"\n Enter the number of points: ";
	cin>>node;
	if(node<=0)
	{
		cout<<"INVALID-> Invalid-Please try again: ";
		cin>>node;
	}
	for(i=0;i<node;i++)
	{
		for(j=0;j<node;j++)
		{
			cout<<"Enter the value of route between node "<<i<< " and node " <<j <<" ";
			cin>>mat[i][j];
			while(mat[i][j]<0)
			{
				cout<<"\nInvalid- value is always positive. enter the value again: \n";
				cout<<"Enter the cost of value between node "<<i <<" and node "<<j<<" ";
				cin>>mat[i][j];
			}
		}
	}
	cout<<"\n Enter Initial node: ";
	cin>>Initial;
	while(Initial>(node-1))
	{
		cout<<"\nINVALID-Initialnode should be between 0 and "<<node-1<<" ";
		cout<<"\nEnter the initial node again: ";
		cin>>Initial;
		cout<<"\n Enter End node: ";
		cin>>End;
		while(End>(node-1))
		{
			cout<<"\nINVALID-End node should be between 0 and "<<node-1<<" ";
			cout<<"\nEnter the node again: ";
			cin>>End;
		}
	}
}


int getMin()
{
	int end=INT_MAX;
	int min;
	for(i=0;i<node;i++)
	{
		if(!x[i]&&end>=dist[i])
		{
			end=dist[i];
			min=i;
		}
	}
	return min;
}

void find_route()
{
	int src=INT_MAX;
	int columns;
	int count;
	initialize();
	count=0;
	while(count<node)
	{
		columns=getMin();
		x[columns]=1;
		for(i=0;i<node;i++)
		{
			if((!x[i])&& (mat[columns][i]>0))
			{
				if(dist[i]>dist[columns]+mat[columns][i])
				{
					dist[i]=dist[columns]+mat[columns][i];
					TrackNode[i]=columns;
				}
			}
		}
		count++;
	}
}

void print(int Initial,int End)
{
	if(End==Initial)
	{
		cout<<Initial;
	}
	else if(TrackNode[End]==-1)
	{
		cout<<"\n no route from node "<<Initial<< "to node" <<End;
	}
	else
	{
		print(Initial,TrackNode[End]);
		cout<<End;
	}
}

void Output()
{
	find_route();
	print(Initial,End);
	cout<<"\n shortest route--> "<<dist[End];
}


int main()
{
	Input();
	Output();
}