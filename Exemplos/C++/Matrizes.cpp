// ====/====/====/====/====/====/====/====/====/====/====/
// Declaração dinâmica
// ====/====/====/====/====/====/====/====/====/====/====/

// IMPORTANTE: c[i][j]
// i - Linha, vertical
// j - coluna, horizontal

// i++ -> desce
// i-- -> sobe

cin >> n >> m;

char** mat = new char*[n];

for(i=0; i<n; i++){
  mat[i] = new char[m];
}