/*
 * SamiLanguage.h
 * 
 * 
 */

#ifndef SamiLanguage_H_
#define SamiLanguage_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiLanguage: public SamiObject {
public:
    SamiLanguage();
    SamiLanguage(String* json);
    virtual ~SamiLanguage();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLanguage* fromJson(String* obj);

    String* getPCode();
    void setPCode(String* pCode);
    Long* getPDateCreated();
    void setPDateCreated(Long* pDate_created);
    Long* getPDateUpdated();
    void setPDateUpdated(Long* pDate_updated);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPDirection();
    void setPDirection(String* pDirection);
    Integer* getPId();
    void setPId(Integer* pId);
    Boolean* getPIsPrimary();
    void setPIsPrimary(Boolean* pIs_primary);
    String* getPName();
    void setPName(String* pName);

private:
    String* pCode;
Long* pDate_created;
Long* pDate_updated;
String* pDescription;
String* pDirection;
Integer* pId;
Boolean* pIs_primary;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiLanguage_H_ */
