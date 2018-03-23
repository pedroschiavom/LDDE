#include <iostream>
#include <cstdlib>
// Pedro Henrique Indalecio Schiavom


using namespace std;
int main() {

    template<typename T>;

    class No{
    private:
        T valor;
        No<T> * proximo;
        No<T> * anterior;


    public:
        No(T valor): valor(valor),anterior(NULL),proximo(NULL){

        }

        T getValor()const{
            return valor;
        }


    friend class LDDE<T>;



template<typename T>;
    class LDDE{
    private:
        No<T> * primeiro;
        No<T> * ultimo;
        int total;

        friend class No<T>;


    public:
        LDDE(): primeiro(NULL), ultimo(NULL),total(0){
        }

        bool insere(T valor){
            No<T>* novo = new No<T>(valor);
            if(!novo)
                return false;

            No<T>* a = NULL;
            No<T>* b = primeiro;
            while(b && b->valor < novo->valor){
                a = b;
                b = b->proximo;
            }

            a->proximo = novo;
            novo->prox = b;

            if(b)
                b->anterior = novo;

            novo->anterior = a;

            return true;


        }
    };

    };




    return 0;
}
