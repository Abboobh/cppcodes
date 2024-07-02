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
