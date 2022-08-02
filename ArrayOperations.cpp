#include <iostream>
using namespace std;

class array
{
  int a[100];
  int n, s, i, pos;

public:
  void create()
  {
    cout << "Enter no of elements " << endl;
    cin >> n;
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  }

  void display()
  {
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << "\n";
  }

  void search()
  {
    cout << "enter the number you want to search" << endl;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == s)
      {
        cout << "element is at " << i << " index" << endl;
        break;
      }
    }
  }

  void insert()
  {
    n++;
    cout << "Enter number to insert" << endl;
    cin >> i;
    cout << "Enter position at which number is to be inserted" << endl;
    cin >> pos;
    for (int i = n; i >= pos - 1; i--)
    {
      a[i + 1] = a[i];
    }
    a[pos - 1] = i;
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
  }
  void Delete()
  {
    cout << "Enter position from which you want to delete element" << endl;
    cin >> pos;
    for (int i = pos - 1; i < n; i++)
    {
      a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
      cout << a[i] << " ";
    }
    n--;
  }
};

int main()
{
  array obj;
  int choice;
  cout << "Create an array" << endl;
  obj.create();
  for (int i = 0; i < 100; i++)
  {
    cout << "Enter choice\n1.Display\n2.Insert\n3.Delete\n4.Search\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
      obj.display();
      break;
    case 2:
      obj.insert();

      break;
    case 3:
      obj.Delete();
      break;
    case 4:
      obj.search();
      break;
    }
    cout << "\n"
         << endl;
  }

  return 0;
}
