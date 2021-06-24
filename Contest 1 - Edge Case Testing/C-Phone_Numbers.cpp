#include <iostream>
#include <string>

using namespace std;

enum PhoneFormat
{
    LeadingNumber = 7,
    AlternativeLeadingNumber = 8,
    CodeLength = 3,
    DefaultCode = 495,
    NumberLength = 7,
    FullLength = 11
};

void RemoveSymbols(string &phone)
{
    for (auto it = phone.begin(); it != phone.end(); ++it)
    {
        if (*it == '+' ||
            *it == '-' ||
            *it == '(' ||
            *it == ')')
            it = phone.erase(it);
    }
}

void AddLeadingNumberAndCode(string &phone)
{
    string newPhone = to_string(LeadingNumber) + to_string(DefaultCode) + phone;
    phone = newPhone;
}

void SwitchLeadingNumber(string &phone)
{
    phone.front() = to_string(LeadingNumber).front();
}

void StandardizePhone(string &phone)
{
    RemoveSymbols(phone);
    if (phone.length() == NumberLength)
        AddLeadingNumberAndCode(phone);
    else if (phone.length() == FullLength &&
             phone.front() == to_string(AlternativeLeadingNumber).front())
        SwitchLeadingNumber(phone);
}

int main()
{
    string toAdd;
    cin >> toAdd;

    StandardizePhone(toAdd);

    string added, isAdded;
    while (cin >> added)
    {
        isAdded = "NO";
        StandardizePhone(added);
        if (toAdd == added)
            isAdded = "YES";
        cout << isAdded << endl;
    }

    return EXIT_SUCCESS;
}