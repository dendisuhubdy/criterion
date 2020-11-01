#pragma once
#include <string>
#include <sstream>
#include <criterion/details/indicators.hpp>

static inline void print_criterion_help() {
  std::cout << "\n";
  std::cout << termcolor::bold << "NAME\n" << termcolor::reset;
  std::cout << "     " << termcolor::bold << "criterion" << termcolor::reset << " -- Run Criterion benchmarks\n";
  std::cout << "\n";
  std::cout << termcolor::bold << "SYNOPSIS\n" << termcolor::reset;
  std::cout << termcolor::bold << "     criterion " << termcolor::reset 
            << "[" << termcolor::bold << "-e,--export_results" << termcolor::reset 
            << " {csv,json,md} <filename>]\n";
  std::cout << "\n";
  std::cout << termcolor::bold << "DESCRIPTION\n" << termcolor::reset;
  std::cout << "     The " << termcolor::bold << "criterion" << termcolor::reset 
            << " microbenchmarking utility repeatedly executes a list of registered functions,\n     statistically analyzing the temporal behavior of code\n";
  std::cout << "\n";
  std::cout << "     The options are as follows:\n";
  std::cout << "\n";
  std::cout << termcolor::bold << "     -e,--export_results " << termcolor::reset 
            << termcolor::underline << "format" << termcolor::reset
            << " "
            << termcolor::underline << "filename" << termcolor::reset << "\n";
  std::cout << "          Export benchmark results to file. The following are the supported formats.\n";
  std::cout << "\n";
  std::cout << "          " << termcolor::bold << "csv" << termcolor::reset << "       Comma separated values (CSV) delimited text file\n";
  std::cout << "          " << termcolor::bold << "json" << termcolor::reset << "      JavaScript Object Notation (JSON) text file\n";
  std::cout << "          " << termcolor::bold << "md" << termcolor::reset << "        Markdown (md) text file\n";
  std::cout << "\n";
  std::cout << termcolor::bold << "     -h,--help " << termcolor::reset << "\n";
  std::cout << "          Print this help message\n";
} 