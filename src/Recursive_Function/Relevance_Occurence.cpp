#include "Relevance_Occurrence.h"

int recursivEvidence(relation list [],int n, int idoccurrence)
{
    int accumulator = 0;
    if(n < 0)
    {
        return 0;
    }
    else
    {
        if(list[n].occurrence_id == idoccurrence)
        {
            return accumulator + list[n].Relevancelevel + recursivEvidence(list, n -1, idoccurrence);
        }
        else
        {
            return recursivEvidence(list, n -1, idoccurrence);
        }
    }
}