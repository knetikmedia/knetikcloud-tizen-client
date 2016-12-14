/*
 * SamiSort.h
 * 
 * 
 */

#ifndef SamiSort_H_
#define SamiSort_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiSort: public SamiObject {
public:
    SamiSort();
    SamiSort(String* json);
    virtual ~SamiSort();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSort* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiSort_H_ */
