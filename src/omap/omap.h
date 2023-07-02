#include<memory>


void add(int a, int b);
namespace otl
{
    template<typename T, typename X>
    class OMap{
    public:
        T first;
        X second;
    private:
        std::unique_ptr<OMap> root = nullptr;
        std::unique_ptr<OMap> leftChild = nullptr;
        std::unique_ptr<OMap> rightChild = nullptr;
    public:
        OMap();
        OMap(T f, X s);

        void operator[](T key) const;
    };

};