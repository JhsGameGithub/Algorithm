#pragma once

template<typename T>
class DynamicArray
{
private:
    T* arr;
    int arr_number;
    int size;

public:
    DynamicArray()
    {
        arr = new T[5];
        arr_number = 1;
        size = 0;
    }

    ~DynamicArray()
    {
        delete[] arr;
    }

    void push_back(const T obj)
    {
        size++;
        if (size <= arr_number * 5)
        {
            arr[size - 1] = obj;
        }
        else
        {
            T* tmp = new T[arr_number * 5];

            for (int i = 0; i < size - 1; i++)
                tmp[i] = arr[i];

            arr_number++;

            delete[] arr;

            arr = new T[arr_number * 5];

            for (int i = 0; i < size - 1; i++)
                arr[i] = tmp[i];

            arr[size - 1] = obj;

            delete[] tmp;
        }
    }

    T operator[] (const int i) const
    {
        return arr[i];
    }
};