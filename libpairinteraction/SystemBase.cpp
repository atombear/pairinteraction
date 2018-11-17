/*
 * Copyright (c) 2016 Sebastian Weber, Henri Menke. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SystemBase.h"

// Explicit template specializations

template <>
template <>
StateOne SystemBase<StateOne>::createStateFromLabel(std::string label) {
    return StateOne(label);
}

template <>
template <>
StateTwo SystemBase<StateTwo>::createStateFromLabel(std::string label) {
    return StateTwo({{"0_" + label, "1_" + label}});
}
