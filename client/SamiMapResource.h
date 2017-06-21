/*
 * SamiMapResource.h
 * 
 * 
 */

#ifndef SamiMapResource_H_
#define SamiMapResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiMapResource: public SamiObject {
public:
    SamiMapResource();
    SamiMapResource(String* json);
    virtual ~SamiMapResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMapResource* fromJson(String* obj);

    HashMap* getPMap();
    void setPMap(HashMap* pMap);
    String* getPType();
    void setPType(String* pType);

private:
    HashMap* pMap;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiMapResource_H_ */
