/*
 * SamiMap«string,object».h
 * 
 * 
 */

#ifndef SamiMap«string,object»_H_
#define SamiMap«string,object»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Collection::HashMap;


namespace Swagger {

class SamiMap«string,object»: public SamiObject {
public:
    SamiMap«string,object»();
    SamiMap«string,object»(String* json);
    virtual ~SamiMap«string,object»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMap«string,object»* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiMap«string,object»_H_ */
