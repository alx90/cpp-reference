/*
 * BlueWhale.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_13_MULTI_INHERITANCE_BLUEWHALE_H_
#define SRC_13_MULTI_INHERITANCE_BLUEWHALE_H_

#include <iostream>

#include "Mammal.h"
#include "MarineAnimal.h"

namespace Multiinheritance {

class BlueWhale : public MarineAnimal, public Mammal {
public:
	BlueWhale();
	virtual ~BlueWhale();

	void printBlueWhale();
};

} /* namespace Multiinheritance */

#endif /* SRC_13_MULTI_INHERITANCE_BLUEWHALE_H_ */
