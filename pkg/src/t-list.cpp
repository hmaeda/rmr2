//Copyright 2013 Revolution Analytics
//   
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS, 
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

#include "t-list.h"

using namespace Rcpp;

SEXP t_list(SEXP _ll, SEXP _tll) {
  List ll(_ll);
  List tll(_tll);
  for(int i = 0; i < ll.size(); i++) {
    List l_i(as<List>(ll[i]));
    for(int j = 0; j < l_i.size(); j++) {
      List tl_j(as<List>(tll[j]));
      tl_j[i] = l_i[j];};}
  return wrap(tll);}