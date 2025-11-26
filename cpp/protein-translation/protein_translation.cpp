#include "protein_translation.h"

#include <map>
#include <string>
#include <vector>

namespace protein_translation {

std::map<std::string, std::string> rna_strands = {
    {"AUG", "Methionine"}, {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},    {"UUG", "Leucine"},       {"UCU", "Serine"},
    {"UCC", "Serine"},     {"UCA", "Serine"},        {"UCG", "Serine"},
    {"UAU", "Tyrosine"},   {"UAC", "Tyrosine"},      {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},   {"UGG", "Tryptophan"},    {"UAA", "STOP"},
    {"UAG", "STOP"},       {"UGA", "STOP"}};

std::vector<std::string> proteins(std::string sequence) {
  std::vector<std::string> amino_acids{};
  for (long unsigned int i{0}; i < sequence.size(); i += 3) {
    if (rna_strands.at(sequence.substr(i, 3)) != "STOP") {
      amino_acids.emplace_back(rna_strands.at(sequence.substr(i, 3)));
    } else
      break;
  }
  return amino_acids;
}

} // namespace protein_translation
