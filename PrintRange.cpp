template<typename T>
void PrintRange(T begin, T end)
{
    while (begin != end)
    {
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
}

template<typename Container, typename Type>
void FindAndPrint(Container value, Type var)
{
    auto range_begin = value.begin();
    auto range_end = find_if(value.begin(), value.end(), [var](Type _type) {return _type == var; });

    while (range_begin != range_end)
    {
        cout << *range_begin << " ";
        range_begin++;
    }
    cout << endl;
    while (range_end != value.end())
    {
        cout << *range_end << " ";
        range_end++;
    }
    cout << endl;
}
