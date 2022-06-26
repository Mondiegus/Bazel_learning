#include <10.h>

SprintCompetition::SprintCompetition()
{
    cout << "Please provide 3 results for 100 meters sprint" << endl;
    for(int i = 0; i< numberOfRuns; i++)
        cin >> results[i];
}

double SprintCompetition::calculateAverageValue()
{
    double result = 0;
    for(int i = 0; i< numberOfRuns; i++)
        result += results[i];
    result /= numberOfRuns;
    return result;
}

void SprintCompetition::printSprintCompetition()
{    
    cout << "Assigned times are: " << endl;
    for(int i = 0; i< numberOfRuns; i++)
        cout << results[i] << endl;
    cout << "And the average value is: " << calculateAverageValue() << endl;
}
