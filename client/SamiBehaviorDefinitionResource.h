/*
 * SamiBehaviorDefinitionResource.h
 * 
 * 
 */

#ifndef SamiBehaviorDefinitionResource_H_
#define SamiBehaviorDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
#include "SamiPropertyDefinitionResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiBehaviorDefinitionResource: public SamiObject {
public:
    SamiBehaviorDefinitionResource();
    SamiBehaviorDefinitionResource(String* json);
    virtual ~SamiBehaviorDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBehaviorDefinitionResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    IList* getPPrerequisiteBehaviors();
    void setPPrerequisiteBehaviors(IList* pPrerequisite_behaviors);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);

private:
    String* pDescription;
IList* pPrerequisite_behaviors;
IList* pProperties;
String* pType_hint;
};

} /* namespace Swagger */

#endif /* SamiBehaviorDefinitionResource_H_ */
