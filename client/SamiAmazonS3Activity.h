/*
 * SamiAmazonS3Activity.h
 * 
 * 
 */

#ifndef SamiAmazonS3Activity_H_
#define SamiAmazonS3Activity_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiAmazonS3Activity: public SamiObject {
public:
    SamiAmazonS3Activity();
    SamiAmazonS3Activity(String* json);
    virtual ~SamiAmazonS3Activity();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAmazonS3Activity* fromJson(String* obj);

    String* getPAction();
    void setPAction(String* pAction);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPFilename();
    void setPFilename(String* pFilename);
    Long* getPId();
    void setPId(Long* pId);
    String* getPObjectKey();
    void setPObjectKey(String* pObject_key);
    String* getPUrl();
    void setPUrl(String* pUrl);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pAction;
Long* pCreated_date;
String* pFilename;
Long* pId;
String* pObject_key;
String* pUrl;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiAmazonS3Activity_H_ */
