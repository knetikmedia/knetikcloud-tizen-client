/*
 * SamiUserRelationship.h
 * 
 * 
 */

#ifndef SamiUserRelationship_H_
#define SamiUserRelationship_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUser.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserRelationship: public SamiObject {
public:
    SamiUserRelationship();
    SamiUserRelationship(String* json);
    virtual ~SamiUserRelationship();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserRelationship* fromJson(String* obj);

    SamiUser* getPChild();
    void setPChild(SamiUser* pChild);
    String* getPContext();
    void setPContext(String* pContext);
    Long* getPId();
    void setPId(Long* pId);
    SamiUser* getPParent();
    void setPParent(SamiUser* pParent);

private:
    SamiUser* pChild;
String* pContext;
Long* pId;
SamiUser* pParent;
};

} /* namespace Swagger */

#endif /* SamiUserRelationship_H_ */
