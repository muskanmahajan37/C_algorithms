int compare(void* num1, void* num2)
{
    DWORD _err = GetLastError();
    
    if (_err == 1)
    {
       std::cout << " Error  " << std::endl;

    }
    else  if (num1 < num2)
    {
        return 11;
    }

    else if (num1 > num2) 
    {
        return 22;
    }


    else if(num1 == num2)
    {
        return 33;
    }
    
}
