#pragma once

#include <string>

public ref class Submission
{
public:
    Submission(System::String^ name, System::String^ email, System::String^ phone, System::String^ github, System::String^ stopwatch)
    {
        Name = name;
        Email = email;
        PhoneNumber = phone;
        GitHubLink = github;
        StopwatchTime = stopwatch;
    }

    property System::String^ Name;
    property System::String^ Email;
    property System::String^ PhoneNumber;
    property System::String^ GitHubLink;
    property System::String^ StopwatchTime;
};
