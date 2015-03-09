#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int number_of_questions = 0;
    int number_homework = 0;
    char academic_class[150];
    
    
    cout << "How many questions does your homework have?  ";
    
    cin >> number_of_questions;
    
    cout << endl;
    
    cout << "What number homework is this?  ";
    
    cin >> number_homework;
    
    cout << endl;
    
    cout << "What class is this for?  ";
    
    cin.ignore();
    
    cin.getline(academic_class, 150);
    
    cout << endl;
    
    
    cout << "OUTPUTTING LaTeX SOURCE:" << endl << endl;
    
    cout << "\\documentclass[12pt]{article}" << endl << endl << "\\usepackage[margin=1in]{geometry}" << endl << "\\usepackage{amsmath,amsthm,amssymb}" << endl << endl << "\\newcommand{\\N}{\\mathbb{N}}" << endl << "\\newcommand{\\Z}{\\mathbb{Z}}" << endl << endl << "\\newenvironment{problem}[2][Problem]{\\begin{trivlist}" << endl << "\\item[\\hskip \\labelsep {\\bfseries #1}\\hskip \\labelsep {\\bfseries #2.}]}{\\end{trivlist}}" << endl << endl << "\\begin{document}";
    
    cout << endl << "\\title{Homework " << number_homework << "}" << endl;
    
    cout << "\\author{Peter Shultz\\\\ " << academic_class << "}" << endl << "\\maketitle" << endl << endl;
    
    for (int i = 1; i <= number_of_questions; i++)
    {
        cout << "\\begin{problem}{" << i << "}" << endl << "\\end{problem}" << endl << endl;
    }
    
    cout << "\\end{document}" << endl << endl;
    
    
    return 0;
}
