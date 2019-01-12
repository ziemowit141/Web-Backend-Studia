from django.db import models
from django.contrib.auth.models import User

class profile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    is_student = models.BooleanField(default=False)
    is_reviewer = models.BooleanField(default=False)
    academic_degree = models.CharField(max_length=100,default="None")
    picture = models.FileField(default='')
    def __str__(user):
        return str(user.user)
