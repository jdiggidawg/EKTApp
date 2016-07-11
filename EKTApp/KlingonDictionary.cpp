//
//  KlingonDictionary.cpp
//  EKTApp
//
//  Created by June Kim on 2016-07-10.
//  Copyright © 2016 jdiggidawg. All rights reserved.
//

#include "KlingonDictionary.hpp"


void KlingonDictionary::populate(vector<Word> wordList) {
    for (int i = 0; i < wordList.size(); i++) {
        tree.insert(wordList[i]);
    }
}

string KlingonDictionary::klingonFor(string englishWord) {
    Word *query = new Word();
    query->english = englishWord;
    Word result = *tree.search(query);
    
    return result.klingon;
}