/*
 * SamiVariableTypeResource.h
 * 
 * 
 */

#ifndef SamiVariableTypeResource_H_
#define SamiVariableTypeResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiVariableTypeResource: public SamiObject {
public:
    SamiVariableTypeResource();
    SamiVariableTypeResource(String* json);
    virtual ~SamiVariableTypeResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariableTypeResource* fromJson(String* obj);

    String* getPBase();
    void setPBase(String* pBase);
    String* getPName();
    void setPName(String* pName);

private:
    String* pBase;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiVariableTypeResource_H_ */
