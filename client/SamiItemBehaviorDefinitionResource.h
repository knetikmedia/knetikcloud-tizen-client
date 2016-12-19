/*
 * SamiItemBehaviorDefinitionResource.h
 * 
 * 
 */

#ifndef SamiItemBehaviorDefinitionResource_H_
#define SamiItemBehaviorDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiItemBehaviorDefinitionResource: public SamiObject {
public:
    SamiItemBehaviorDefinitionResource();
    SamiItemBehaviorDefinitionResource(String* json);
    virtual ~SamiItemBehaviorDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiItemBehaviorDefinitionResource* fromJson(String* obj);

    SamiBehavior* getPBehavior();
    void setPBehavior(SamiBehavior* pBehavior);
    Boolean* getPModifiable();
    void setPModifiable(Boolean* pModifiable);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);

private:
    SamiBehavior* pBehavior;
Boolean* pModifiable;
Boolean* pRequired;
};

} /* namespace Swagger */

#endif /* SamiItemBehaviorDefinitionResource_H_ */
