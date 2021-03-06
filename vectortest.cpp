#include<iostream>
#include<vector>
using namespace std;
//vector 是对数组的封装 顺序存储结果  内部使用的是
void testvector(){
	vector<int> avector;
	vector<int>::iterator pointer;
	avector.push_back(10);
	avector.push_back(9);
	avector.push_back(8);
	avector.push_back(7);
	avector.push_back(6);
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
	cout<<"\nvector的大小是："<<avector.size()<<endl;
	cout<<"\nvector的第一个元素是："<<avector.front()<<endl;
	cout<<"\nvector的第一个元素是："<<avector.front()<<endl;
	cout<<"\nvector的最后一个元素是："<<avector.back()<<endl;
	cout<<"\nvector删除最后一个元素后：";
	avector.erase(avector.begin()+3);//erase是删除元素后 指向下一个元素的位置  所以当删除最后一个元素的时候会出错
	//还可以删除一个范围内的数据   删除中间的数据完成之后 后面的数据向前移动，是顺序存储结构
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
	avector.insert(avector.begin()+3,7);//在avector.begin()+3的前面插入一个数   
	cout<<"\nvector插入一个元素后：";
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
}
void show(vector<int> &dat){
	vector<int>::iterator it;		
	cout<<"遍历结果是："<<endl;
	for (it=dat.begin();it!=dat.end();++it)
	{
		cout<<*it<<"  ";
	}
	cout<<"\nsize="<<dat.size()<<endl;
	cout<<"capacity="<<dat.capacity()<<endl;
	//cout<<"reserve="<<dat.reserve()<<endl;
}
void test_vector(){
	vector<int> vcon;
	vcon.reserve(3);
	show(vcon);
	cout<<"尾部加入一个 2 元素：\n";
	vcon.insert(vcon.end(),2);
	show(vcon);
	cout<<"尾部加入2个 3 元素：\n";
	vcon.insert(vcon.end(),2,3);
	show(vcon);
	cout<<"尾部加入1个 4 元素：\n";
	vcon.insert(vcon.end(),1,4);
	show(vcon);
	cout<<"尾部加入一个 从头到尾后 元素：\n";
	vcon.insert(vcon.end(),vcon.begin(),vcon.end());
	show(vcon);
	cout<<"尾部加入1个 4 元素：\n";
	vcon.insert(vcon.end(),1,4);
	show(vcon);
	cout<<"排序之后元素：\n";	
	//vcon.capacity();容量 vcon.reserve();保留大小
	show(vcon);
	system("pause");
}
