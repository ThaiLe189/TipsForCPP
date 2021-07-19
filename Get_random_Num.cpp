unsigned int GetRandomInteger(int low, int up)
{
    unsigned int uiResult;

    if (low > up)
    {
        int temp = low;
        low = up;
        up = temp;
    }

    uiResult = (rand() % (up - low + 1)) + low;

    return uiResult;
}

int main(){
	int n = GetRandomInteger(1, 10);
}
