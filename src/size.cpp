int SIZE(int x, int y, int z)
{
    if (x < 0)
    {
        x = 0;
    }

    if (x > z - 1)
    {
        x = z - 1;
    }

    if (y < 0)
    {
        y = 0;
    }

    if (y > z - 1)
    {
        y = z - 1;
    }

    return (y * z) + x;
}