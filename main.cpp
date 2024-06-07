#include <iostream>
#include <vector>

using namespace std;

struct Document {
    int id;
    int rating;
};



vector<Document> SortDocument(vector<Document> _documents)
{
    vector<Document> sortedDocumen(static_cast<int>(_documents.size()));

    for (int i = 0; i < static_cast<int>(sortedDocumen.size()); i++)
    {
        if (i == 0)
        {
            int max = 0;
            int maxIndex = 0;
            for (size_t j = 0; j < _documents.size(); j++)
            {
                if (_documents[j].rating > max)
                {
                    max = _documents[j].rating;
                    maxIndex = j;
                }
            }
            sortedDocumen.push_back(_documents[maxIndex]);
        }
        else
        {
            for (int j = 0; j < static_cast<int>(_documents.size()); j++)
            {
                int max = 0;
                int maxIndex = 0;
                if (_documents[j].rating > max && _documents[j].rating < _documents[j - 1].rating)
                {
                    max = _documents[j].rating;
                    maxIndex = j;
                }
                sortedDocumen.push_back(_documents[maxIndex]);
            }
        }
    }

    return sortedDocumen;
}

void PrintDocuments(vector<Document> documents, size_t skip_start, size_t skip_finish) {
    // отсортировать документы и вывести не все

    vector<Document> sortedDocumen = SortDocument(documents);

    for (size_t i = skip_start; i <= skip_finish; i++)
    {
        cout << "{ id = " << documents[i].id << ", rating = " << documents[i].rating << "}" << endl;
    }
}

int main() {
    PrintDocuments({ {100, 5}, {101, 7}, {102, -4}, {103, 9}, {104, 1} }, 1, 2);
}
