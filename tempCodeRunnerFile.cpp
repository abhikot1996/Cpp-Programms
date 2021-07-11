template<typenaeme T>
string itos(T i)
{
    stringstream s;
    s << i;
    return s.str();
}