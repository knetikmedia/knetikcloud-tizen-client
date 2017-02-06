/*
 * SamiActionVariableResource.h
 * 
 * 
 */

#ifndef SamiActionVariableResource_H_
#define SamiActionVariableResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiActionVariableResource: public SamiObject {
public:
    SamiActionVariableResource();
    SamiActionVariableResource(String* json);
    virtual ~SamiActionVariableResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActionVariableResource* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    Boolean* getPOptional();
    void setPOptional(Boolean* pOptional);
    String* getPType();
    void setPType(String* pType);

private:
    String* pName;
Boolean* pOptional;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiActionVariableResource_H_ */
