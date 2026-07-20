#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

/**
 * @brief Resolve o problema "Crise de Energia" (Josephus Modificado).
 * * Encontra o menor m tal que a região 13 é a última a ser "desligada" 
 * em um processo de eliminação circular de N regiões, começando na região 1.
 * * @param N Número total de regiões (13 <= N <= 100).
 * @return O menor inteiro m.
 */
int resolver_crise_energia(int N) {
    // A região 13 deve ser a última a sobrar (a N-ésima a ser escolhida/removida).
    const int REGIAO_ALVO = 13;
    
    // O loop principal busca o menor m.
    for (int m = 1; ; ++m) {
        // 1. Inicialização: Lista de regiões de 1 a N.
        std::vector<int> regioes(N);
        std::iota(regioes.begin(), regioes.end(), 1); // Preenche com 1, 2, ..., N
        
        int indice_atual = 0; // Índice na lista de regiões (começa no 0, que é a região 1)
        
        // 2. Simulação: Realiza N-1 remoções.
        for (int i = 0; i < N - 1; ++i) {
            int tamanho_atual = regioes.size();
            
            // Calcula o índice a ser removido.
            // (indice_atual + m - 1) para contar m posições a partir da atual (m-ésimo elemento).
            // % tamanho_atual garante que o índice está dentro dos limites.
            indice_atual = (indice_atual + m - 1) % tamanho_atual;
            
            // Remove a região na posição calculada.
            regioes.erase(regioes.begin() + indice_atual);
            
            // Após a remoção, o elemento que estava na próxima posição (indice_atual + 1)
            // agora está na posição 'indice_atual'. Este é o novo ponto de partida.
            // Se o último elemento foi removido, o novo ponto de partida deve ser o primeiro (índice 0).
            if (indice_atual == regioes.size()) {
                indice_atual = 0;
            }
            // Nota: No C++ com std::vector::erase, o índice_atual já aponta para o próximo elemento,
            // então o ajuste 'if (indice_atual == regioes.size())' cuida do caso de wrap-around.
        }
        
        // 3. Verificação: A única região restante é a REGIAO_ALVO (13)?
        if (regioes[0] == REGIAO_ALVO) {
            return m; // Encontrou o menor m
        }
    }
}

int main() {
    // Otimização de I/O (opcional, mas boa prática em programação competitiva)
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    
    // Leitura contínua até que N seja 0.
    while (std::cin >> N && N != 0) {
        int resultado_m = resolver_crise_energia(N);
        std::cout << resultado_m << "\n";
    }
    
    return 0;
}