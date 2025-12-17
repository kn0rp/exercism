#include "rna_transcription.h"
#include <string>

using std::string;

namespace rna_transcription {

char to_rna(char nucl) {
  switch (nucl) {
  case 'G':
    return 'C';
  case 'C':
    return 'G';
  case 'T':
    return 'A';
  case 'A':
    return 'U';
  default:
    return ' ';
  }
}

string to_rna(string dna) {
  for (long unsigned int i{0}; i < dna.size(); i++) {
    dna.at(i) = to_rna(dna.at(i));
  }
  return dna;
}

} // namespace rna_transcription
