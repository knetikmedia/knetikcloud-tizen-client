/*
 * SamiUserTag.h
 * 
 * 
 */

#ifndef SamiUserTag_H_
#define SamiUserTag_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUser.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUserTag: public SamiObject {
public:
    SamiUserTag();
    SamiUserTag(String* json);
    virtual ~SamiUserTag();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTag* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPTag();
    void setPTag(String* pTag);
    SamiUser* getPUser();
    void setPUser(SamiUser* pUser);

private:
    Integer* pId;
String* pTag;
SamiUser* pUser;
};

} /* namespace Swagger */

#endif /* SamiUserTag_H_ */
