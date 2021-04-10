#include<iostream>
template <typename T>
static int partition(T a[], int l, int h)
{
    T pivot = a[h];
    int i = l-1;
    for(int j = l; j<=h-1; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            T temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            
        }
    }
    T temp = a[i+1];
    a[i+1] = a[h];
    a[h] = temp;
    return i+1;
}
template <typename T>
static void quicksort(T a[], int l, int h)
{
    if(l < h)
    {
        int partind = partition(a, l, h);
        quicksort(a, l, partind-1);
        quicksort(a, partind+1, h);
    }
}
template <typename T>
static T* input(int si)
{
    T *ptr = new T[si];
    for(int i = 0; i<si; i++)
    {
        std::cout<<"Enter element \n";
        std::cin>>ptr[i];
    }
    return ptr;
}
int main()
{
    int ch, si;
    std::cout<<"Enter Datatype choice: \n 1.) double \n 2.) float \n 3.) int \n 4.) char \n ";
    std::cin>>ch;
    switch(ch)
    {
        case 1:
        {
            double* ptr;
            std::cout<<"Enter size of array \n";
            std::cin>>si;
            ptr = input<double>(si);
            quicksort(ptr, 0, si-1);
            for(int i = 0; i<si; i++)
            std::cout<<ptr[i]<<"\t";
            delete [] ptr;
        }
        break;
        case 2:
        {
            float* ptr;
            std::cout<<"Enter size of array \n";
            std::cin>>si;
            ptr = input<float>(si);
            quicksort(ptr, 0, si-1);
            for(int i = 0; i<si; i++)
            std::cout<<ptr[i]<<"\t";
            delete [] ptr;
        }
        break;
        case 3:
        {
            int *ptr;
            std::cout<<"Enter size of array \n";
            std::cin>>si;
            ptr = input<int>(si);
            quicksort(ptr, 0, si-1);
            for(int i = 0; i<si; i++)
            std::cout<<ptr[i]<<"\t";
            delete [] ptr;
        }
        break;
        case 4:
        {
            char *ptr;
            std::cout<<"Enter size of array \n";
            std::cin>>si;
            ptr = input<char>(si);
            quicksort(ptr, 0, si-1);
            for(int i = 0; i<si; i++)
            std::cout<<ptr[i]<<"\t";
            delete [] ptr;
        }
        break;
    }
    return 0;
}